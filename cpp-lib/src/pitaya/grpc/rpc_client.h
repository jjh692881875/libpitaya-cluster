#ifndef PITAYA_GRPC_RPC_CLIENT_H
#define PITAYA_GRPC_RPC_CLIENT_H

#include "pitaya/binding_storage.h"
#include "pitaya/grpc_config.h"
#include "pitaya/protos/pitaya.grpc.pb.h"
#include "pitaya/rpc_client.h"
#include "pitaya/service_discovery.h"
#include "pitaya/utils/sync_map.h"
#include "spdlog/spdlog.h"

#include <chrono>
#include <grpcpp/channel.h>
#include <unordered_map>

namespace pitaya {

class GrpcClient
    : public RpcClient
    , public service_discovery::Listener
{
public:
    using CreateStubFunc = std::function<std::unique_ptr<protos::Pitaya::StubInterface>(
        std::shared_ptr<grpc::ChannelInterface>)>;

    GrpcClient(GrpcConfig config,
               std::shared_ptr<service_discovery::ServiceDiscovery> serviceDiscovery,
               std::unique_ptr<BindingStorage> bindingStorage,
               CreateStubFunc createStub,
               const char* loggerName = nullptr);
    GrpcClient(GrpcConfig config,
               std::shared_ptr<service_discovery::ServiceDiscovery> serviceDiscovery,
               std::unique_ptr<BindingStorage> bindingStorage,
               const char* loggerName = nullptr);
    ~GrpcClient();
    protos::Response Call(const pitaya::Server& target, const protos::Request& req) override;
    boost::optional<PitayaError> SendPushToUser(const std::string& serverId,
                                                const std::string& serverType,
                                                const protos::Push& push) override;
    boost::optional<PitayaError> SendKickToUser(const std::string& serverId,
                                                const std::string& serverType,
                                                const protos::KickMsg& ksick) override;

    void ServerAdded(const pitaya::Server& server) override;
    void ServerRemoved(const pitaya::Server& server) override;

private:
    std::shared_ptr<spdlog::logger> _log;
    GrpcConfig _config;
    utils::SyncMap<std::string, std::unique_ptr<protos::Pitaya::StubInterface>> _stubsForServers;
    std::shared_ptr<service_discovery::ServiceDiscovery> _serviceDiscovery;
    CreateStubFunc _createStub;
    std::unique_ptr<BindingStorage> _bindingStorage;
};

} // namespace pitaya

#endif // PITAYA_GRPC_RPC_CLIENT_H

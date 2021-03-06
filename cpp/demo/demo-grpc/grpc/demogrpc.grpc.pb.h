// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: demogrpc.proto
#ifndef GRPC_demogrpc_2eproto__INCLUDED
#define GRPC_demogrpc_2eproto__INCLUDED

#include "demogrpc.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace DemoGrpc {

class DemoGrpcer final {
 public:
  static constexpr char const* service_full_name() {
    return "DemoGrpc.DemoGrpcer";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::DemoGrpc::DemoRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>> AsyncGetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>>(AsyncGetDemoRspRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>> PrepareAsyncGetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>>(PrepareAsyncGetDemoRspRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>* AsyncGetDemoRspRaw(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::DemoGrpc::DemoRsp>* PrepareAsyncGetDemoRspRaw(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::DemoGrpc::DemoRsp* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>> AsyncGetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>>(AsyncGetDemoRspRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>> PrepareAsyncGetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>>(PrepareAsyncGetDemoRspRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, std::function<void(::grpc::Status)>) override;
      void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetDemoRsp(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void GetDemoRsp(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::DemoGrpc::DemoRsp* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>* AsyncGetDemoRspRaw(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::DemoGrpc::DemoRsp>* PrepareAsyncGetDemoRspRaw(::grpc::ClientContext* context, const ::DemoGrpc::DemoReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetDemoRsp_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetDemoRsp(::grpc::ServerContext* context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetDemoRsp() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDemoRsp(::grpc::ServerContext* context, ::DemoGrpc::DemoReq* request, ::grpc::ServerAsyncResponseWriter< ::DemoGrpc::DemoRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetDemoRsp<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetDemoRsp() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::DemoGrpc::DemoReq, ::DemoGrpc::DemoRsp>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::DemoGrpc::DemoReq* request, ::DemoGrpc::DemoRsp* response) { return this->GetDemoRsp(context, request, response); }));}
    void SetMessageAllocatorFor_GetDemoRsp(
        ::grpc::experimental::MessageAllocator< ::DemoGrpc::DemoReq, ::DemoGrpc::DemoRsp>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::DemoGrpc::DemoReq, ::DemoGrpc::DemoRsp>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetDemoRsp(
      ::grpc::CallbackServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetDemoRsp(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetDemoRsp<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_GetDemoRsp<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetDemoRsp() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetDemoRsp() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetDemoRsp(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetDemoRsp() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetDemoRsp(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetDemoRsp(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* GetDemoRsp(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetDemoRsp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetDemoRsp() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::DemoGrpc::DemoReq, ::DemoGrpc::DemoRsp>(std::bind(&WithStreamedUnaryMethod_GetDemoRsp<BaseClass>::StreamedGetDemoRsp, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetDemoRsp() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetDemoRsp(::grpc::ServerContext* /*context*/, const ::DemoGrpc::DemoReq* /*request*/, ::DemoGrpc::DemoRsp* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetDemoRsp(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::DemoGrpc::DemoReq,::DemoGrpc::DemoRsp>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetDemoRsp<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetDemoRsp<Service > StreamedService;
};

}  // namespace DemoGrpc


#endif  // GRPC_demogrpc_2eproto__INCLUDED

// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/green_20220302.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Green20220302;

Alibabacloud_Green20220302::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu", "green.aliyuncs.com"},
    {"cn-hongkong", "green.aliyuncs.com"},
    {"cn-huhehaote", "green.aliyuncs.com"},
    {"cn-qingdao", "green.aliyuncs.com"},
    {"cn-zhangjiakou", "green.aliyuncs.com"},
    {"eu-central-1", "green.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "green.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "green.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "green.aliyuncs.com"},
    {"cn-shanghai-finance-1", "green.aliyuncs.com"},
    {"cn-north-2-gov-1", "green.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("green"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Green20220302::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ImageModerationResponse Alibabacloud_Green20220302::Client::imageModerationWithOptions(shared_ptr<ImageModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageModerationResponse(callApi(params, req, runtime));
}

ImageModerationResponse Alibabacloud_Green20220302::Client::imageModeration(shared_ptr<ImageModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return imageModerationWithOptions(request, runtime);
}

TextModerationResponse Alibabacloud_Green20220302::Client::textModerationWithOptions(shared_ptr<TextModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextModerationResponse(callApi(params, req, runtime));
}

TextModerationResponse Alibabacloud_Green20220302::Client::textModeration(shared_ptr<TextModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return textModerationWithOptions(request, runtime);
}

VoiceModerationResponse Alibabacloud_Green20220302::Client::voiceModerationWithOptions(shared_ptr<VoiceModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationResponse(callApi(params, req, runtime));
}

VoiceModerationResponse Alibabacloud_Green20220302::Client::voiceModeration(shared_ptr<VoiceModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationWithOptions(request, runtime);
}

VoiceModerationCancelResponse Alibabacloud_Green20220302::Client::voiceModerationCancelWithOptions(shared_ptr<VoiceModerationCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModerationCancel"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationCancelResponse(callApi(params, req, runtime));
}

VoiceModerationCancelResponse Alibabacloud_Green20220302::Client::voiceModerationCancel(shared_ptr<VoiceModerationCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationCancelWithOptions(request, runtime);
}

VoiceModerationResultResponse Alibabacloud_Green20220302::Client::voiceModerationResultWithOptions(shared_ptr<VoiceModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationResultResponse(callApi(params, req, runtime));
}

VoiceModerationResultResponse Alibabacloud_Green20220302::Client::voiceModerationResult(shared_ptr<VoiceModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationResultWithOptions(request, runtime);
}

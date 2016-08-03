/* soapBasicHttpBinding_USCOREICalculatorService.cpp
   Generated by gSOAP 2.8.17r from calculator.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapBasicHttpBinding_USCOREICalculatorService.h"

BasicHttpBinding_USCOREICalculatorService::BasicHttpBinding_USCOREICalculatorService()
{	this->soap = soap_new();
	this->own = true;
	BasicHttpBinding_USCOREICalculatorService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

BasicHttpBinding_USCOREICalculatorService::BasicHttpBinding_USCOREICalculatorService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	BasicHttpBinding_USCOREICalculatorService_init(_soap->imode, _soap->omode);
}

BasicHttpBinding_USCOREICalculatorService::BasicHttpBinding_USCOREICalculatorService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	BasicHttpBinding_USCOREICalculatorService_init(iomode, iomode);
}

BasicHttpBinding_USCOREICalculatorService::BasicHttpBinding_USCOREICalculatorService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	BasicHttpBinding_USCOREICalculatorService_init(imode, omode);
}

BasicHttpBinding_USCOREICalculatorService::~BasicHttpBinding_USCOREICalculatorService()
{	if (this->own)
		soap_free(this->soap);
}

void BasicHttpBinding_USCOREICalculatorService::BasicHttpBinding_USCOREICalculatorService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"tempuri", "http://tempuri.org/", NULL, NULL},
	{"mssamm", "http://Microsoft.Samples.MessageSecurity", NULL, NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void BasicHttpBinding_USCOREICalculatorService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void BasicHttpBinding_USCOREICalculatorService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	BasicHttpBinding_USCOREICalculatorService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
BasicHttpBinding_USCOREICalculatorService *BasicHttpBinding_USCOREICalculatorService::copy()
{	BasicHttpBinding_USCOREICalculatorService *dup = SOAP_NEW_COPY(BasicHttpBinding_USCOREICalculatorService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int BasicHttpBinding_USCOREICalculatorService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int BasicHttpBinding_USCOREICalculatorService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int BasicHttpBinding_USCOREICalculatorService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int BasicHttpBinding_USCOREICalculatorService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int BasicHttpBinding_USCOREICalculatorService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int BasicHttpBinding_USCOREICalculatorService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void BasicHttpBinding_USCOREICalculatorService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void BasicHttpBinding_USCOREICalculatorService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *BasicHttpBinding_USCOREICalculatorService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void BasicHttpBinding_USCOREICalculatorService::soap_noheader()
{	this->soap->header = NULL;
}

void BasicHttpBinding_USCOREICalculatorService::soap_header(struct _wsse__Security *wsse__Security)
{	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
}

const SOAP_ENV__Header *BasicHttpBinding_USCOREICalculatorService::soap_header()
{	return this->soap->header;
}

int BasicHttpBinding_USCOREICalculatorService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->soap->error;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	else
		return this->soap->error;
	return SOAP_OK;
}

SOAP_SOCKET BasicHttpBinding_USCOREICalculatorService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET BasicHttpBinding_USCOREICalculatorService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int BasicHttpBinding_USCOREICalculatorService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int BasicHttpBinding_USCOREICalculatorService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___tempuri__Add(BasicHttpBinding_USCOREICalculatorService*);
static int serve___tempuri__Subtract(BasicHttpBinding_USCOREICalculatorService*);
static int serve___tempuri__Multiply(BasicHttpBinding_USCOREICalculatorService*);
static int serve___tempuri__Divide(BasicHttpBinding_USCOREICalculatorService*);

int BasicHttpBinding_USCOREICalculatorService::dispatch()
{	BasicHttpBinding_USCOREICalculatorService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "mssamm:Add")) || (this->soap->action && !strcmp(this->soap->action, "http://Microsoft.Samples.MessageSecurity/ICalculator/Add")))
		return serve___tempuri__Add(this);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "mssamm:Subtract")) || (this->soap->action && !strcmp(this->soap->action, "http://Microsoft.Samples.MessageSecurity/ICalculator/Subtract")))
		return serve___tempuri__Subtract(this);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "mssamm:Multiply")) || (this->soap->action && !strcmp(this->soap->action, "http://Microsoft.Samples.MessageSecurity/ICalculator/Multiply")))
		return serve___tempuri__Multiply(this);
	if ((!this->soap->action && !soap_match_tag(this->soap, this->soap->tag, "mssamm:Divide")) || (this->soap->action && !strcmp(this->soap->action, "http://Microsoft.Samples.MessageSecurity/ICalculator/Divide")))
		return serve___tempuri__Divide(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___tempuri__Add(BasicHttpBinding_USCOREICalculatorService *service)
{	struct soap *soap = service->soap;
	struct __tempuri__Add soap_tmp___tempuri__Add;
	_mssamm__AddResponse mssamm__AddResponse;
	mssamm__AddResponse.soap_default(soap);
	soap_default___tempuri__Add(soap, &soap_tmp___tempuri__Add);
	if (!soap_get___tempuri__Add(soap, &soap_tmp___tempuri__Add, "-tempuri:Add", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Add(soap_tmp___tempuri__Add.mssamm__Add, &mssamm__AddResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	mssamm__AddResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || mssamm__AddResponse.soap_put(soap, "mssamm:AddResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || mssamm__AddResponse.soap_put(soap, "mssamm:AddResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tempuri__Subtract(BasicHttpBinding_USCOREICalculatorService *service)
{	struct soap *soap = service->soap;
	struct __tempuri__Subtract soap_tmp___tempuri__Subtract;
	_mssamm__SubtractResponse mssamm__SubtractResponse;
	mssamm__SubtractResponse.soap_default(soap);
	soap_default___tempuri__Subtract(soap, &soap_tmp___tempuri__Subtract);
	if (!soap_get___tempuri__Subtract(soap, &soap_tmp___tempuri__Subtract, "-tempuri:Subtract", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Subtract(soap_tmp___tempuri__Subtract.mssamm__Subtract, &mssamm__SubtractResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	mssamm__SubtractResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || mssamm__SubtractResponse.soap_put(soap, "mssamm:SubtractResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || mssamm__SubtractResponse.soap_put(soap, "mssamm:SubtractResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tempuri__Multiply(BasicHttpBinding_USCOREICalculatorService *service)
{	struct soap *soap = service->soap;
	struct __tempuri__Multiply soap_tmp___tempuri__Multiply;
	_mssamm__MultiplyResponse mssamm__MultiplyResponse;
	mssamm__MultiplyResponse.soap_default(soap);
	soap_default___tempuri__Multiply(soap, &soap_tmp___tempuri__Multiply);
	if (!soap_get___tempuri__Multiply(soap, &soap_tmp___tempuri__Multiply, "-tempuri:Multiply", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Multiply(soap_tmp___tempuri__Multiply.mssamm__Multiply, &mssamm__MultiplyResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	mssamm__MultiplyResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || mssamm__MultiplyResponse.soap_put(soap, "mssamm:MultiplyResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || mssamm__MultiplyResponse.soap_put(soap, "mssamm:MultiplyResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tempuri__Divide(BasicHttpBinding_USCOREICalculatorService *service)
{	struct soap *soap = service->soap;
	struct __tempuri__Divide soap_tmp___tempuri__Divide;
	_mssamm__DivideResponse mssamm__DivideResponse;
	mssamm__DivideResponse.soap_default(soap);
	soap_default___tempuri__Divide(soap, &soap_tmp___tempuri__Divide);
	if (!soap_get___tempuri__Divide(soap, &soap_tmp___tempuri__Divide, "-tempuri:Divide", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Divide(soap_tmp___tempuri__Divide.mssamm__Divide, &mssamm__DivideResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	mssamm__DivideResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || mssamm__DivideResponse.soap_put(soap, "mssamm:DivideResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || mssamm__DivideResponse.soap_put(soap, "mssamm:DivideResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
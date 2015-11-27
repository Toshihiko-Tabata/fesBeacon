#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t828;
// System.IO.Stream
struct Stream_t830;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t536;
// System.Net.HttpWebRequest
struct HttpWebRequest_t538;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t565;
// System.Int32[]
struct Int32U5BU5D_t610;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t552;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m3326 (HttpsClientStream_t828 * __this, Stream_t830 * ___stream, X509CertificateCollection_t536 * ___clientCertificates, HttpWebRequest_t538 * ___request, ByteU5BU5D_t141* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m3327 (HttpsClientStream_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m3328 (HttpsClientStream_t828 * __this, X509Certificate_t565 * ___certificate, Int32U5BU5D_t610* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t565 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3329 (Object_t * __this /* static, unused */, X509CertificateCollection_t536 * ___clientCerts, X509Certificate_t565 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t536 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t552 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3330 (Object_t * __this /* static, unused */, X509Certificate_t565 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;

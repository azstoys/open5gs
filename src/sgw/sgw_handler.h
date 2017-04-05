#ifndef __SGW_HANDLER_H__
#define __SGW_HANDLER_H__

#include "gtp_tlv.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(void) sgw_handle_create_session_request(
        gtp_xact_t *xact, c_uint8_t type, gtp_message_t *gtp_message);

CORE_DECLARE(void) sgw_handle_create_session_response(
        gtp_xact_t *xact, c_uint8_t type, gtp_message_t *gtp_message);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SGW_HANDLER_H__ */
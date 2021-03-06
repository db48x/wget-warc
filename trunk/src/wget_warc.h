/* Declarations of WARC helper methods. */
#ifndef WGET_WARC_H
#define WGET_WARC_H

#include "host.h"

void warc_init ();
void warc_close ();
void warc_timestamp (char *timestamp);
void warc_uuid_str (char *id_str);

FILE * warc_tempfile ();

bool warc_write_request_record (char *url, char *timestamp_str, char *concurrent_to_uuid, ip_address *ip, FILE *body, long int payload_offset);
bool warc_write_response_record (char *url, char *timestamp_str, char *concurrent_to_uuid, ip_address *ip, FILE *body, long int payload_offset, char *mime_type, int response_code, char *redirect_location);
bool warc_write_resource_record (char *url, char *timestamp_str, char *concurrent_to_uuid, ip_address *ip, FILE *body, long int payload_offset);

#endif /* WGET_WARC_H */


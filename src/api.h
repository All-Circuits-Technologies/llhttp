
int llhttp__on_url(llhttp_t* s, 
                   const unsigned char* p, 
                   const unsigned char* endp);
int llhttp__on_message_begin( llhttp_t* s, 
                              const unsigned char* p, 
                              const unsigned char* endp);
int llhttp__on_url_complete(llhttp_t* s, 
                            const unsigned char* p, 
                            const unsigned char* endp);
int llhttp__on_url_complete(llhttp_t* s, 
                            const unsigned char* p, 
                            const unsigned char* endp);
int llhttp__on_status(llhttp_t* s, 
                      const unsigned char* p, 
                      const unsigned char* endp);
int llhttp__on_status_complete(llhttp_t* s, 
                               const unsigned char* p, 
                               const unsigned char* endp);
int llhttp__on_header_field(llhttp_t* s, 
                            const unsigned char* p, 
                            const unsigned char* endp);
int llhttp__on_header_field_complete(llhttp_t* s, 
                                     const unsigned char* p, 
                                     const unsigned char* endp);
int llhttp__on_header_value(llhttp_t* s, 
                            const unsigned char* p, 
                            const unsigned char* endp);
int llhttp__on_header_value_complete(llhttp_t* s, 
                                     const unsigned char* p, 
                                     const unsigned char* endp);
int llhttp__on_headers_complete(llhttp_t* s, 
                                const unsigned char* p, 
                                const unsigned char* endp);
int llhttp__on_message_complete(llhttp_t* s, 
                                const unsigned char* p, 
                                const unsigned char* endp);
int llhttp__on_body(llhttp_t* s, 
                    const unsigned char* p, 
                    const unsigned char* endp);
int llhttp__on_chunk_header(llhttp_t* s, 
                            const unsigned char* p, 
                            const unsigned char* endp);
int llhttp__on_chunk_complete(llhttp_t* s, 
                              const unsigned char* p, 
                              const unsigned char* endp);


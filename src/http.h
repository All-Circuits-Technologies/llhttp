
int llhttp__before_headers_complete(llhttp_t* parser,
                                    const unsigned char* p,
                                    const unsigned char* endp);
int llhttp__after_headers_complete(llhttp_t* parser,
                                   const unsigned char* p,
                                   const unsigned char* endp);
int llhttp__after_message_complete(llhttp_t* parser,
                                   const unsigned char* p,
                                   const unsigned char* endp);


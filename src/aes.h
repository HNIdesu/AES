#ifndef __AES_H__
#define __AES_H__
#include <stdint.h>
class AES
{
public:
    AES(const char* key,uint32_t key_size);
    ~AES();
    uint32_t get_keysize() const;
    const uint8_t* get_round_key() const;
    void encrypt_cbc(const uint8_t* data,uint32_t data_length,const uint8_t* iv,uint8_t* buffer) const;
    void encrypt_ecb(const uint8_t* data,uint32_t data_length,uint8_t* buffer) const;
private:
    const uint8_t* _round_key;
    uint32_t _key_size;
};

#endif
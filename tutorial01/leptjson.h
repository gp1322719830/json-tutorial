#ifndef LEPTJSON_H__
#define LEPTJSON_H__

//JSON����
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

typedef struct {
    lept_type type;  //JSONֵ
}lept_value;

enum {  //����״ֻ̬��
    LEPT_PARSE_OK = 0,  //�����ɹ�
    LEPT_PARSE_EXPECT_VALUE,  //ֻ���пհ�
    LEPT_PARSE_INVALID_VALUE,  //��Чֵ�� ��null��boolean������
    LEPT_PARSE_ROOT_NOT_SINGULAR  //����ֵ�Ϳհ�֮���������ַ�
};

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */

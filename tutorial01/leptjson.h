#ifndef LEPTJSON_H__
#define LEPTJSON_H__

//JSON类型
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

typedef struct {
    lept_type type;  //JSON值
}lept_value;

enum {  //返回状态只能
    LEPT_PARSE_OK = 0,  //解析成功
    LEPT_PARSE_EXPECT_VALUE,  //只含有空白
    LEPT_PARSE_INVALID_VALUE,  //无效值， 非null、boolean字面量
    LEPT_PARSE_ROOT_NOT_SINGULAR  //若在值和空白之后还有其他字符
};

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */

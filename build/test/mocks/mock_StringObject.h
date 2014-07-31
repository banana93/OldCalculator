/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STRINGOBJECT_H
#define _MOCK_STRINGOBJECT_H

#include "StringObject.h"
#include "CException.h"

void mock_StringObject_Init(void);
void mock_StringObject_Destroy(void);
void mock_StringObject_Verify(void);




#define stringNew_IgnoreAndReturn(cmock_retval) stringNew_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void stringNew_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, String* cmock_to_return);
#define stringNew_ExpectAndReturn(cmock_retval) stringNew_CMockExpectAndReturn(__LINE__, cmock_retval)
void stringNew_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, String* cmock_to_return);
typedef String* (* CMOCK_stringNew_CALLBACK)(int cmock_num_calls);
void stringNew_StubWithCallback(CMOCK_stringNew_CALLBACK Callback);
#define stringNew_ExpectAndThrow(cmock_to_throw) stringNew_CMockExpectAndThrow(__LINE__, cmock_to_throw)
void stringNew_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, CEXCEPTION_T cmock_to_throw);
#define StringTrim_Ignore() StringTrim_CMockIgnore()
void StringTrim_CMockIgnore(void);
#define StringTrim_Expect(str, StringChar) StringTrim_CMockExpect(__LINE__, str, StringChar)
void StringTrim_CMockExpect(UNITY_LINE_TYPE cmock_line, String* str, char* StringChar);
typedef void (* CMOCK_StringTrim_CALLBACK)(String* str, char* StringChar, int cmock_num_calls);
void StringTrim_StubWithCallback(CMOCK_StringTrim_CALLBACK Callback);
#define StringTrim_ExpectAndThrow(str, StringChar, cmock_to_throw) StringTrim_CMockExpectAndThrow(__LINE__, str, StringChar, cmock_to_throw)
void StringTrim_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, String* str, char* StringChar, CEXCEPTION_T cmock_to_throw);
#define stringRemoveWordContaining_IgnoreAndReturn(cmock_retval) stringRemoveWordContaining_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void stringRemoveWordContaining_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, String* cmock_to_return);
#define stringRemoveWordContaining_ExpectAndReturn(str, ContainSet, cmock_retval) stringRemoveWordContaining_CMockExpectAndReturn(__LINE__, str, ContainSet, cmock_retval)
void stringRemoveWordContaining_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, String* str, char* ContainSet, String* cmock_to_return);
typedef String* (* CMOCK_stringRemoveWordContaining_CALLBACK)(String* str, char* ContainSet, int cmock_num_calls);
void stringRemoveWordContaining_StubWithCallback(CMOCK_stringRemoveWordContaining_CALLBACK Callback);
#define stringRemoveWordContaining_ExpectAndThrow(str, ContainSet, cmock_to_throw) stringRemoveWordContaining_CMockExpectAndThrow(__LINE__, str, ContainSet, cmock_to_throw)
void stringRemoveWordContaining_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, String* str, char* ContainSet, CEXCEPTION_T cmock_to_throw);
#define stringRemoveWordNotContaining_IgnoreAndReturn(cmock_retval) stringRemoveWordNotContaining_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void stringRemoveWordNotContaining_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, String* cmock_to_return);
#define stringRemoveWordNotContaining_ExpectAndReturn(str, notContainSet, cmock_retval) stringRemoveWordNotContaining_CMockExpectAndReturn(__LINE__, str, notContainSet, cmock_retval)
void stringRemoveWordNotContaining_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, String* str, char* notContainSet, String* cmock_to_return);
typedef String* (* CMOCK_stringRemoveWordNotContaining_CALLBACK)(String* str, char* notContainSet, int cmock_num_calls);
void stringRemoveWordNotContaining_StubWithCallback(CMOCK_stringRemoveWordNotContaining_CALLBACK Callback);
#define stringRemoveWordNotContaining_ExpectAndThrow(str, notContainSet, cmock_to_throw) stringRemoveWordNotContaining_CMockExpectAndThrow(__LINE__, str, notContainSet, cmock_to_throw)
void stringRemoveWordNotContaining_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, String* str, char* notContainSet, CEXCEPTION_T cmock_to_throw);
#define StringCharAt_IgnoreAndReturn(cmock_retval) StringCharAt_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void StringCharAt_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define StringCharAt_ExpectAndReturn(str, relativePos, cmock_retval) StringCharAt_CMockExpectAndReturn(__LINE__, str, relativePos, cmock_retval)
void StringCharAt_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, String* str, int relativePos, int cmock_to_return);
typedef int (* CMOCK_StringCharAt_CALLBACK)(String* str, int relativePos, int cmock_num_calls);
void StringCharAt_StubWithCallback(CMOCK_StringCharAt_CALLBACK Callback);
#define StringCharAt_ExpectAndThrow(str, relativePos, cmock_to_throw) StringCharAt_CMockExpectAndThrow(__LINE__, str, relativePos, cmock_to_throw)
void StringCharAt_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, String* str, int relativePos, CEXCEPTION_T cmock_to_throw);

#endif
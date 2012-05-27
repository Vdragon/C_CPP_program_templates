/* header名稱 | Header name */
/* include guard：避免同一個header檔案被include第二次。*/
#ifndef _H_INCLUDED
  #define _H_INCLUDED
  /* 如果是C++編譯器則停用C++特有的函式名稱mangling*/
  #ifdef __cplusplus
    extern "C"{
  #endif

/*||||| Forward declarations |||||*/

/*||||| 程式所include之函式庫的標頭檔 | Included Library Headers |||||*/

/*|||||常數與巨集 | Constants & Macros |||||*/

/*||||| Definition of data type, enumeration, data structure and class |||||*/


  #ifdef __cplusplus
    }
  #endif
#endif /* _H_INCLUDED */

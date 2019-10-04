
#include "P2P_API_Define.h"
#include "P2P_API_ERR.h"

#ifndef _P2P_API_H_
#define _P2P_API_H_

#ifdef WIN32_STATIC
#define P2P_API 
#else

#if WIN32_DLL
#ifndef P2P_API_EXPORT
#define P2P_API __declspec(dllimport)
#else
#define P2P_API __declspec(dllexport)
#endif
#endif

#endif

#if ANDROID_LIB || IOS_LIB
#define P2P_API
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	//接口说明
    P2P_API long P2PAPI_InitialWithServer(char *svr);//初始化P2PAPI内部资源  svr:{IN}P2P服务器的地址（具体地址请联系厂家索要）  这个接口与P2PAPI_Initial()只能调用一个
    P2P_API long P2PAPI_Initial();//初始化P2PAPI内部资源	
    P2P_API long P2PAPI_DeInitial();//释放P2PAPI资源
    P2P_API long P2PAPI_GetAPIVersion();//获取P2PAPI版本
    P2P_API long P2PAPI_CreateInstance(long *nHandle);//创建P2PAPI实例  nHandle：{OUT}P2P实例句柄
    P2P_API long P2PAPI_DestroyInstance(long nHandle);//销毁P2P实例   nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_DestroyAllInstance();//销毁所有P2P实例
    P2P_API long P2PAPI_Connect(long nHandle, char *uid, char *user, char *pwd, CHAR bEnableLanSearch);//开始连接P2P  nHandle：{IN} P2P实力句柄 uid：{IN}P2P ID  user：{IN}登录用户名  pwd：{IN}登录密码
    P2P_API long P2PAPI_Close(long nHandle);//关闭P2P连接
    P2P_API long P2PAPI_CloseAll();//关闭所有P2P连接
//P2PAPI_StartVideo 最后一个参数nStreamID的定义：
//0, 1:720P
//2, 3:360P
//4, 5:180P
    P2P_API long P2PAPI_StartVideo(long nHandle, int nStreamID);//请求视频 nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_StopVideo(long nHandle);//停止视频   nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_StartAudio(long nHandle);//请求音频  nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_StopAudio(long nHandle);//停止音频   nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_StartTalk(long nHandle);//开始发言   nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_StopTalk(long nHandle);//停止发言    nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_TalkData(long nHandle, char *pData, int len);//发送发言数据  nHandle：{IN}P2P实例句柄 pData：{IN}ADPCM数据指针   len：{IN} ADPCM数据长度，注意，当前必须为256
    P2P_API long P2PAPI_SendMessage(long nHandle, int type, char *msg, int len);//发送消息   nHandle：{IN}P2P实例句柄
    P2P_API long P2PAPI_SetAVDataCallBack(long nHandle, AVDataCallback AVCallback, void *pParam);//设置音视频数据回调
    P2P_API long P2PAPI_SetMessageCallBack(long nHandle, MessageCallback MsgCallback, void *pParam);//设置消息回调
    P2P_API long P2PAPI_SetPlaybackAVDataCallBack(long nHandle, AVDataCallback AVCallback, void *pParam);//设置远程回放时的音视频数据回调

#ifdef __cplusplus
}
#endif


#endif
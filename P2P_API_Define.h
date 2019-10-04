
#ifndef _P2P_API_DEFINE_H_
#define _P2P_API_DEFINE_H_

typedef void (*AVDataCallback)(long nHandle, int bVideo, char *pData, int len, void *pParam);//回调函数定义   nHandle：{IN}P2P实例句柄  bVideo：0:音频 1:视频  pData：数据指针  Len：数据长度 pParam：用户参数   pParam：【IN】用户参数，在回调函数中将作为输入参数传回给用户返回值
typedef void (*MessageCallback)(long nHandle, int type, char *msg, int len, void *pParam);//消息回调函数定义  nHandle：P2P实例句柄   type：消息类型   msg：消息内容   len：消息长度   pParam：用户参数   pParam：【IN】用户参数，在回调函数中将作为输入参数传回给用户返回值

#define	EMPTY_VALUE_KEY				0xeeeeeeee

//Message type 消息类型定义
#define MSG_TYPE_P2P_STATUS         0x0      //P2P连接状态
#define MSG_TYPE_P2P_MODE           0x1      //P2P连接模式
#define MSG_TYPE_GET_CAMERA_PARAMS  0x2      //获取视频参数
#define MSG_TYPE_DECODER_CONTROL    0x3      //云台控制
#define MSG_TYPE_GET_PARAMS         0x4      //获取参数（包含网络参数，无线网络参数，用户信息，FTP参数，邮件参数，DDNS参数，时间参数）
#define MSG_TYPE_SNAPSHOT           0x5      //抓取一张JPEG图片
#define MSG_TYPE_CAMERA_CONTROL     0x6      //视频参数调节
#define MSG_TYPE_SET_NETWORK        0x7      //设置网络参数
#define MSG_TYPE_REBOOT_DEVICE      0x8      //重启摄像机
#define MSG_TYPE_RESTORE_FACTORY    0x9      //恢复出产设置
#define MSG_TYPE_SET_USER           0xa      //设置用户账户
#define MSG_TYPE_SET_WIFI           0xb      //配置WIFI参数
#define MSG_TYPE_SET_DATETIME       0xc      //配置时间参数
#define MSG_TYPE_GET_STATUS         0xd
#define MSG_TYPE_GET_PTZ_PARAMS     0xe
#define MSG_TYPE_SET_DDNS           0xf
#define MSG_TYPE_SET_MAIL           0x10
#define MSG_TYPE_SET_FTP            0x11
#define MSG_TYPE_SET_ALARM          0x12
#define MSG_TYPE_SET_PTZ            0x13
#define MSG_TYPE_WIFI_SCAN          0x14
#define MSG_TYPE_GET_ALARM_LOG      0x15
#define MSG_TYPE_GET_RECORD         0x16
#define MSG_TYPE_GET_RECORD_FILE    0x17
#define MSG_TYPE_SET_PPPOE          0x18
#define MSG_TYPE_SET_UPNP           0x19
#define MSG_TYPE_DEL_RECORD_FILE    0x1a
#define MSG_TYPE_SET_MEDIA          0x1b
#define MSG_TYPE_SET_RECORD_SCH     0x1c
#define MSG_TYPE_CLEAR_ALARM_LOG    0x1d

#define MSG_TYPE_WIFI_PARAMS        0x1f     //各类参数
#define MSG_TYPE_MAIL_PARAMS        0x20
#define MSG_TYPE_FTP_PARAMS         0x21
#define MSG_TYPE_NETWORK_PARAMS     0x22
#define MSG_TYPE_USER_INFO          0x23
#define MSG_TYPE_DDNS_PARAMS        0x24
#define MSG_TYPE_DATETIME_PARAMS    0x25
#define MSG_TYPE_ALARM_PARAMS       0x26

#define MSG_TYPE_SET_DEVNAME        0x27
#define MSG_TYPE_ALARM_NOTIFY       0x28
#define MSG_TYPE_PLAY_BACK_START    0x29
#define MSG_TYPE_PLAY_BACK_STOP     0x30
#define MSG_TYPE_FORMAT_SDCARD      0x31
#define MSG_TYPE_FIRMWARE_UPGRADE   0x32

#define MSG_TYPE_SET_SENSOR_STATUS  0x33
#define MSG_TYPE_GET_SENSOR_STATUS  0x34
#define MSG_TYPE_DEL_SENSOR			0x35
#define MSG_TYPE_SET_SENSOR_NAME    0x36
#define MSG_TYPE_GET_SENSOR_LIST    0x37
#define MSG_TYPE_SET_SENSOR_PRESET  0x38
#define MSG_TYPE_GET_SENSOR_PRESET  0x39
#define MSG_TYPE_GET_CMD_STRING		0x40
#define MSG_TYPE_GET_FACTORY		0x41
#define MSG_TYPE_SET_TALKADPCMFORMAT 0x42

//alarm notify
#define ALARM_MOTION    0x1
#define ALARM_IO    0x2
   


//p2p status  P2P连接状态
#define P2P_STATUS_CONNECT_TIME_OUT         0x0       //连接超时
#define P2P_STATUS_INVALID_ID               0x1       //无效的ID
#define P2P_STATUS_CONNECT_SUCCESS          0x2       //连接成功
#define P2P_STATUS_DISCONNECTED             0x3       //连接断开
#define P2P_STATUS_CONNECT_FAIlED           0x4       //连接失败
#define P2P_STATUS_CONNECTING               0x5       //正在连接
#define P2P_STATUS_DEVICE_NOT_ON_LINE       0x6       //设备不在线
#define P2P_STATUS_INVALID_USER_PWD         0x7       //用户名或密码错误

//p2p mode   P2P连接模式
#define P2P_MODE_P2P_RELAY                  0x0       //通过转发服务器连接
#define P2P_MODE_P2P_CONNECTED              0x1       //P2P连接

//decoder control command  云台控制 
#define CMD_PTZ_UP                      0             //云台向上 
#define CMD_PTZ_UP_STOP                 1             //云台向上停止
#define CMD_PTZ_DOWN                    2             //云台向下
#define CMD_PTZ_DOWN_STOP               3             //下停止
#define CMD_PTZ_LEFT                    4             //左
#define CMD_PTZ_LEFT_STOP               5             //左停止
#define CMD_PTZ_RIGHT                   6             //右
#define CMD_PTZ_RIGHT_STOP             	7             //右停止
#define CMD_PTZ_OPIZOOMIN             	18
#define CMD_PTZ_OPIZOOMOUT             	17
#define CMD_PTZ_OPIFOCUSIN             	20
#define CMD_PTZ_OPIFOCUSOUT             19


#define CMD_PTZ_CENTER                  25            //云台居中
#define CMD_PTZ_UP_DOWN                 26            //云台上下巡航
#define CMD_PTZ_UP_DOWN_STOP            27            //上下巡航停止
#define CMD_PTZ_LEFT_RIGHT              28            //左右巡航
#define CMD_PTZ_LEFT_RIGHT_STOP         29            //左右巡航停止


#define CMD_PTZ_PREFAB_BIT_SET0         30            //设置预置位1
#define CMD_PTZ_PREFAB_BIT_SET1         32            //2
#define CMD_PTZ_PREFAB_BIT_SET2         34            //3
#define CMD_PTZ_PREFAB_BIT_SET3         36            //4
#define CMD_PTZ_PREFAB_BIT_SET4         38            //5
#define CMD_PTZ_PREFAB_BIT_SET5         40            //6
#define CMD_PTZ_PREFAB_BIT_SET6         42
#define CMD_PTZ_PREFAB_BIT_SET7         44
#define CMD_PTZ_PREFAB_BIT_SET8         46
#define CMD_PTZ_PREFAB_BIT_SET9         48
#define CMD_PTZ_PREFAB_BIT_SETA         50
#define CMD_PTZ_PREFAB_BIT_SETB         52
#define CMD_PTZ_PREFAB_BIT_SETC         54
#define CMD_PTZ_PREFAB_BIT_SETD         56
#define CMD_PTZ_PREFAB_BIT_SETE         58
#define CMD_PTZ_PREFAB_BIT_SETF         60            //16

#define CMD_PTZ_PREFAB_BIT_RUN0         31            //调用预置位1
#define CMD_PTZ_PREFAB_BIT_RUN1         33
#define CMD_PTZ_PREFAB_BIT_RUN2         35
#define CMD_PTZ_PREFAB_BIT_RUN3         37
#define CMD_PTZ_PREFAB_BIT_RUN4         39
#define CMD_PTZ_PREFAB_BIT_RUN5         41
#define CMD_PTZ_PREFAB_BIT_RUN6         43
#define CMD_PTZ_PREFAB_BIT_RUN7         45
#define CMD_PTZ_PREFAB_BIT_RUN8         47
#define CMD_PTZ_PREFAB_BIT_RUN9         49
#define CMD_PTZ_PREFAB_BIT_RUNA         51
#define CMD_PTZ_PREFAB_BIT_RUNB         53
#define CMD_PTZ_PREFAB_BIT_RUNC         55
#define CMD_PTZ_PREFAB_BIT_RUND         57
#define CMD_PTZ_PREFAB_BIT_RUNE         59
#define CMD_PTZ_PREFAB_BIT_RUNF         61             //调用预置位16

#define CMD_PTZ_SET_MODE				101
#define CMD_PTZ_SET_RESOLUTION			102
#define CMD_PTZ_SET_BITRATE				103
#define CMD_PTZ_SET_FRAMERATE			104



#ifndef _DEF_STRU_AV_HEAD
#define _DEF_STRU_AV_HEAD

typedef struct tag_AV_HEAD   //音视频头的定义
{
    //unsigned int		startcode;	//  0xa815aa55
    //unsigned char		type;		//  0->264 idr frame 1->264 p frame
    //unsigned char  	streamid;	
    //unsigned short  	militime;	//  diff time
    //unsigned int 		sectime;	//  diff time
    //unsigned int    	frameno;	//  frameno
    //unsigned int 		len;		//  data len
    //unsigned char		version;	// version
    //unsigned char		sessid;		//ssid
    //unsigned char		other[2];
    //unsigned char		other1[8];
	//////////////////////////////
	unsigned int		startcode; // 0xa815aa55
	char				type;
	char				streamid;
	unsigned short		militime;
	unsigned int		sectime;
	unsigned int		frameno;
	unsigned int		len;
	unsigned char		version;
	unsigned char		resolution;
	unsigned char		sessid;
	unsigned char		currsit;
	unsigned char		endflag;
	char				byzone;
	char				channel; //for user in sit
	char				type1;
	short				sample;
	short				index;
}AV_HEAD,*PAV_HEAD;

#define MAX_FRAME_BUF_SIZE (512*1024)
typedef struct _stFrameData
{
	AV_HEAD head; 
	char frameBuf[MAX_FRAME_BUF_SIZE];
}Frame_Data;

#endif

typedef struct tag_STRU_CAMERA_PARAMS   //视频消息内容
{
    int resolution;//分辨率
    int brightness;
    int contrast;
    int hue;
    int saturation;
    int flip;
	int mode;//0->50hz 1->60hz  2->outdoor
	int frameRate;//帧率
}STRU_CAMERA_PARAMS,*PSTRU_CAMERA_PARAMS;


typedef struct tag_STRU_CAMERA_CONTROL  //视频参数调节
{
    int param;
    int value;
}STRU_CAMERA_CONTROL,*PSTRU_CAMERA_CONTROL;


typedef struct tag_STRU_NETWORK_PARAMS  //设置网络参数
{
    char ipaddr[64];      //IP地址
    char netmask[64];     //子网掩码
    char gateway[64];     //网关
    char dns1[64];        //服务器1
    char dns2[64];        //服务器2
    int dhcp;             //是否开启dhcp 1: 开启 0: 不开
    int port;             //http端口
    int rtspport;         //rtsp端口，不支持
}STRU_NETWORK_PARAMS,*PSTRU_NETWORK_PARAMS;

typedef struct tag_STRU_USER_INFO  //设置用户账户
{
    char user1[64];       //参观者用户名
    char pwd1[64];        //参观者密码
    char user2[64];       //操作者用户名
    char pwd2[64];        //操作者密码
    char user3[64];       //管理员用户名
    char pwd3[64];        //管理员密码
}STRU_USER_INFO,*PSTRU_USER_INFO;


typedef struct tag_STRU_WIFI_PARAMS   //配置WIFI参数
{
    int enable;           //是否启用  1：启用   0：不启用
    char ssid[128];       //ssid   Service Set Identifier   服务集标识   SSID就是一个局域网的名称，只有设置为名称相同SSID的值的电脑才能互相通信
    int channel;          
    int mode;
    int authtype;
    int encrypt;
    int keyformat;
    int defkey;
    char key1[128];
    char key2[128];
    char key3[128];
    char key4[128];
    int key1_bits;
    int key2_bits;
    int key3_bits;
    int key4_bits;
    char wpa_psk[128];
}STRU_WIFI_PARAMS,*PSTRU_WIFI_PARAMS;


typedef struct tag_STRU_DATETIME_PARAMS   //配置时间参数
{
    int now;                 //当前时间
    int tz;                  //时区
    int ntp_enable;          //是否启用ntp服务  1：启用    0 ：不启用
    char ntp_svr[64];        //服务器地址
}STRU_DATETIME_PARAMS,*PSTRU_DATETIME_PARAMS;


typedef struct tag_STRU_DDNS_PARAMS
{
    int service;
    char user[64];
    char pwd[64];
    char host[64];
    char proxy_svr[64];
    int ddns_mode;
    int proxy_port;
    int ddns_status;
}STRU_DDNS_PARAMS,*PSTRU_DDNS_PARAMS;


typedef struct tag_STRU_FTP_PARAMS
{
    char svr_ftp[64];
    char user[64];
    char pwd[64];
    char dir[128];
    int port;
    int mode;
    int upload_interval;
}STRU_FTP_PARAMS,*PSTRU_FTP_PARAMS;

typedef struct tag_STRU_MAIL_PARAMS
{
    char svr[64];    
    char user[64];    
    char pwd[64];
    char sender[64];
    char receiver1[64];
    char receiver2[64];
    char receiver3[64];
    char receiver4[64];
    int port;
    int ssl;
}STRU_MAIL_PARAMS,*PSTRU_MAIL_PARAMS;

typedef struct tag_STRU_UPGRADE_PARAMS
{
    char server[64];    
    char filepath[64];
	int type;
    char resevered1[64];
    char resevered2[64];
	char resevered3[64];
	char resevered4[64];
}STRU_UPGRADE_PARAMS,*PSTRU_UPGRADE_PARAMS;
typedef struct tag_STRU_ALARM_PARAMS
{
    int motion_armed;
    int motion_sensitivity;
    int input_armed;
    int ioin_level;
    int iolinkage;
    int ioout_level;
    int alarmpresetsit;
    int mail;
    int snapshot;
    int record;
    int upload_interval;
    int schedule_enable;
    int schedule_sun_0;
    int schedule_sun_1;
    int schedule_sun_2;
    int schedule_mon_0;
    int schedule_mon_1;
    int schedule_mon_2;
    int schedule_tue_0;
    int schedule_tue_1;
    int schedule_tue_2;
    int schedule_wed_0;
    int schedule_wed_1;
    int schedule_wed_2;
    int schedule_thu_0;
    int schedule_thu_1;
    int schedule_thu_2;
    int schedule_fri_0;
    int schedule_fri_1;
    int schedule_fri_2;
    int schedule_sat_0;
    int schedule_sat_1;
    int schedule_sat_2;
}STRU_ALARM_PARAMS,*PSTRU_ALARM_PARAMS;

typedef struct tag_STRU_PTZ_PARAMS
{
    int led_mode;
    int ptz_center_onstart;
    int ptz_run_times;
    int ptz_patrol_rate;
    int ptz_patrol_up_rate;
    int ptz_patrol_down_rate;
    int ptz_patrol_left_rate;
    int ptz_patrol_right_rate;
    int disable_preset;
    int ptz_preset;
}STRU_PTZ_PARAMS,*PSTRU_PTZ_PARAMS;

typedef struct tag_STRU_CAMERA_STATUS
{
    char sysver[32];
    char devname[96];
    char devid[32];
    int alarmstatus;
    int sdcardstatus;
    int sdcardtotalsize;
    int sdcardremainsize;
    char mac[32];
    char wifimac[32];
    int dns_status;
    int upnp_status;
	char appver[32];
	char oemid[32];
}STRU_CAMERA_STATUS,*PSTRU_CAMERA_STATUS;

typedef struct tag_STRU_WIFI_SEARCH_RESULT
{
    char ssid[64];
    char mac[64];
    int security;
    char dbm0[32];
    char  dbm1[32];
    int mode;
    int channel;

}STRU_WIFI_SEARCH_RESULT,*PSTRU_WIFI_SEARCH_RESULT;


typedef struct tag_STRU_WIFI_SEARCH_RESULT_LIST
{
    int nResultCount;
    STRU_WIFI_SEARCH_RESULT wifi[50];
}STRU_WIFI_SEARCH_RESULT_LIST,*PSTRU_WIFI_SEARCH_RESULT_LIST;

typedef struct tag__time_t
{
	int nYear;
	int nMonth;
	int nDay;
	int nHour;
	int nMinute;
	int nSecond;
}__SearchTime_t;

typedef struct tag_STRU_GET_RECORD_FILE_PARAM
{
    int PageIndex;
    int PageSize;
	__SearchTime_t startTime;
	__SearchTime_t endTime;
}STRU_GET_RECORD_FILE_PARAM,*PSTRU_GET_RECORD_FILE_PARAM;

typedef struct tag_STRU_PLAY_BACK_PARAM
{
    char filename[128];
    int pos;
}STRU_PLAY_BACK_PARAM,*PSTRU_PLAY_BACK_PARAM;

typedef struct tag_STRU_SDCARD_RECORD_FILE
{
    char szFileName[128];
    int nFileSize;
}STRU_SDCARD_RECORD_FILE,PSTRU_SDCARD_RECORD_FILE;

#define MAX_RECORD_FILE_COUNT 500
typedef struct tag_STRU_RECORD_FILE_LIST
{
    int nCount;
    int nRecordCount;
    int nPageCount;
    int nPageIndex;
    int nPageSize;
    STRU_SDCARD_RECORD_FILE recordFile[MAX_RECORD_FILE_COUNT];

}STRU_RECORD_FILE_LIST, PSTRU_RECORD_FILE_LIST;

typedef struct  tag_STRU_SD_RECORD_PARAM
{
    int record_cover_enable; 
    int record_timer; 
    int record_size;
    int record_time_enable; 
    int record_schedule_sun_0;
    int record_schedule_sun_1; 
    int record_schedule_sun_2; 
    int record_schedule_mon_0; 
    int record_schedule_mon_1; 
    int record_schedule_mon_2; 
    int record_schedule_tue_0; 
    int record_schedule_tue_1; 
    int record_schedule_tue_2; 
    int record_schedule_wed_0;
    int record_schedule_wed_1; 
    int record_schedule_wed_2; 
    int record_schedule_thu_0; 
    int record_schedule_thu_1; 
    int record_schedule_thu_2; 
    int record_schedule_fri_0; 
    int record_schedule_fri_1; 
    int record_schedule_fri_2; 
    int record_schedule_sat_0; 
    int record_schedule_sat_1; 
    int record_schedule_sat_2; 
    int record_sd_status; 
    int sdtotal;
    int sdfree; 
	int	enc_bitrate;//主码率

}STRU_SD_RECORD_PARAM, *PSTRU_SD_RECORD_PARAM;


typedef struct  tag_STRU_SENSOR_PARAM
{
	int sId;
	int sType;
	char sName[128];
	int sStatus;
	int sPreset;
}STRU_SENSOR_PARAM, *PSTRU_SENSOR_PARAM;


#define MAX_SENSOR_COUNT 32
typedef struct  tag_STRU_SENSOR_PARAM_LIST
{
	int count;
	STRU_SENSOR_PARAM	sensors[MAX_SENSOR_COUNT];
}STRU_SENSOR_PARAM_LIST,*PSTRU_SENSOR_PARAM_LIST;

typedef struct  tag_STRU_SENSOR_STATUS
{
	int	cmd;
	int armsetstatus;//1;（0:撤防；1:布防）
	int alarmstatus;//=0;（0:没有报警 1:报警）
	int codestatus;//=0;（0:关闭对码 1:开启对码）
	int doorbell;//=0；（1：开启 0：关闭）
	int ptzspeed;// = 0; (0-10 速度越大云台转动越快)
}STRU_SENSOR_STATUS, *PSTRU_SENSOR_STATUS;

typedef struct tag_STRU_SENSOR_ALARM_INFO{
    int cmd;/*#define ALARM_INFO_PUT_ALARM_INFO   0x01
             #define ALARM_LINK_SNAP_PICTURE     0x02
             #define ALARM_STATUS_INFO_RETURN    0x03*/
    int SensorID[3];
    int LinkPreset;
    char SensorName[64];
    int Sensortype;
    int SensorAction;
    int channel;//通道号
}STRU_SENSOR_ALARM_INFO, *PSTRU_SENSOR_ALARM_INFO;

#endif
#include <stdio.h>

/* printf("\033[字背景颜色;字体颜色m字符串\033[0m" );
部分颜色代码:
字背景颜色: 40--49                字颜色: 30--39
40: 黑                           30: 黑
41: 红                           31: 红
42: 绿                           32: 绿
43: 黄                           33: 黄
44: 蓝                           34: 蓝
45: 紫                           35: 紫
46: 深绿                         36: 深绿
47：白色                         37：白色 */
#define NONE "\033[m"
#define RED "\033[0;32;31m"
#define LIGHT_RED "\033[1;31m"
#define GREEN "\033[0;32;32m"
#define LIGHT_GREEN "\033[1;32m"
#define BLUE "\033[0;32;34m"
#define LIGHT_BLUE "\033[1;34m"
#define DARY_GRAY "\033[1;30m"
#define CYAN "\033[0;36m"
#define LIGHT_CYAN "\033[1;36m"
#define PURPLE "\033[0;35m"
#define LIGHT_PURPLE "\033[1;35m"
#define BROWN "\033[0;33m"
#define YELLOW "\033[33m"
#define LIGHT_GRAY "\033[0;37m"
#define WHITE "\033[1;37m"

#define CLOSE "\033[0m"  //关闭所有属性
#define HIGH "\033[1m"  //设置高亮度
#define LINE "\033[4m"  //下划线
#define LIGHT "\033[5m"  //闪烁
#define F1 "\033[7m"  //反显
#define F2 "\033[8m" //消隐
#define fore1 "\033[30m"
#define fore2 "\033[31m"
#define fore3 "\033[32m"
#define fore4 "\033[33m"
#define fore5 "\033[34m"
#define fore6 "\033[35m"
#define fore7 "\033[36m"
#define fore8 "\033[37m"
#define back1 "\033[0;32;40m"
#define back2 "\033[0;32;41m"
#define back3 "\033[42m"
#define back4 "\033[43m"
#define back5 "\033[44m"
#define back6 "\033[45m"
#define back7 "\033[46m"
#define back8 "\033[47m"
//\033[30m -- \033[37m 设置前景色
//\033[40m -- \033[47m 设置背景色
#define UP "\033[1A" //光标上移n行
#define DOWN "\033[1B" //光标下移n行
#define RIGHT "\033[1C"  //光标右移n行
#define LEFT "\033[3D" //光标左移n行
#define LEFT1 "\033[1D" //光标左移n行
#define F3 "\033[0;0H" //设置光标位置
#define CLEAR "\033[2J" //清屏
#define CLEAN "\033[K" //清除从光标到行尾的内容
#define F4 "\033[s" //保存光标位置
#define F5 "\033[u" //恢复光标位置
#define F6 "\033[?25l" //隐藏光标
#define F7 "\033[?25h" //显示光标

#define LOGE(fmt, ...) {printf(LIGHT_RED);printf("\r [ERROR] [%s]:[%s]: %d ",__FILE__, __FUNCTION__, __LINE__);\
                                printf(fmt, ##__VA_ARGS__);\
                                printf(NONE"\n");}
#define LOGI(fmt, ...) {printf(NONE);printf("\r [INFO] [%s]:[%s]: %d ",__FILE__, __FUNCTION__, __LINE__);\
                                printf(fmt, ##__VA_ARGS__);\
                                printf(NONE"\n");}
#define LOGW(fmt, ...) {printf(YELLOW);printf("\r [WARINING] [%s]:[%s]: %d ",__FILE__, __FUNCTION__, __LINE__);\
                                printf(fmt, ##__VA_ARGS__);\
                                printf(NONE"\n");}


int main(void)
{
    LOGE("zhangJun is a pig %d", 2);
    LOGI("zhangJun is a pig");
    LOGW("zhangJun is a pig");
	return 0;
}
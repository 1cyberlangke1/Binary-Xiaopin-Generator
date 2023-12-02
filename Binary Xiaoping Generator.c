#include<stdio.h>
int main() {
	printf("欢迎使用二进制小品生成器!!!\n灵感来源(bilibili)   https://www.bilibili.com/video/BV1qc411z7TH/\n在下面输入标题(不超过1024字符/ancii码0~255)以开始生成:\n");
	char str[1024] = { '0' };
	while (1) {
		fgets(str, 1024, stdin);
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] < 0 || str[i]>255) { printf("错误!"); break; }
			while (str[i] != 0) {
				if ((str[i] & 1) == 1)printf("饺");
				else printf("子");
				str[i] = str[i] >> 1;
			}
		}
		putchar('\n');
		printf("在下面输入标题(不超过1024字符/ancii码0~255)以开始生成:\n");
	}
	return 0;
}
#include<stdio.h>
int main() {
	printf("��ӭʹ�ö�����СƷ������!!!\n�����Դ(bilibili)   https://www.bilibili.com/video/BV1qc411z7TH/\n�������������(������1024�ַ�/ancii��0~255)�Կ�ʼ����:\n");
	char str[1024] = { '0' };
	while (1) {
		fgets(str, 1024, stdin);
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] < 0 || str[i]>255) { printf("����!"); break; }
			while (str[i] != 0) {
				if ((str[i] & 1) == 1)printf("��");
				else printf("��");
				str[i] = str[i] >> 1;
			}
		}
		putchar('\n');
		printf("�������������(������1024�ַ�/ancii��0~255)�Կ�ʼ����:\n");
	}
	return 0;
}
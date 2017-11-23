#include <config.h>

int main(void){
	printf("Package Name: %s\n",PACKAGE_NAME);
	printf("Package Version: %s\n",PACKAGE_VERSION);
	printf("Bug Report: %s\n",PACKAGE_BUGREPORT);
	printf("Foobar Enabled: %s\n",FOOBAR_ENABLED);
	return 0;
}


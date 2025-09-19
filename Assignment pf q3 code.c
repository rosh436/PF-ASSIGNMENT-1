#include<stdio.h>
int main(){
	int userAge;
	char eyeSight, writtenTest, drivingTest, medicalCertificate;
	printf("Eligibility for a drivers license.\n ");
	printf("Enter your age: ");
	scanf("%d", &userAge);
    if (userAge < 18) {
        printf("Not eligible: underage\n");
        return 0;
    }
    printf("Did you pass the eyesight test? (P/F): ");
    scanf(" %c", &eyeSight);
    if (eyeSight == 'F'|| eyeSight == 'f') {
        printf("You might need a prescription for glasses.\n");
        return 0;
    }
    printf("Did you pass the written test? (P/F): ");
    scanf(" %c", &writtenTest);
    if (writtenTest == 'F'|| writtenTest == 'f') {
        printf("You need to retake the written test.\n");
        return 0;
    }
    printf("Did you pass the driving test? (P/F): ");
    scanf(" %c", &drivingTest);
    if (drivingTest == 'F'|| drivingTest == 'f') {
        printf("Not eligible: failed driving test.\n");
        return 0;
    }
    if (userAge <= 60) {
        printf("Eligible for the license.\n");
    } else {
        printf("Do you have a medical fitness certificate? (Y/N): ");
        scanf(" %c", &medicalCertificate);
        if (medicalCertificate == 'Y'|| medicalCertificate == 'y')
        printf("Eligible for the license.\n");
        else
        printf("Not eligible: need a medical certificate.\n");
    }

    return 0;
}










#include<cstdio>
#include<string>
using namespace std;
//
//second
//third
struct signals{
	const string set_URL;
	const string set_Internet_channel;
	string Internet_channel;
	string Local_network_respond_signal;
};
int Judge(string apply_signal,string URL,signals &sg){ //judge part
	int application_result=0;
	while(apply_signal=="Y"){
		while(!application_result){
			printf("Program error\n");
			exit(-3);
			//notice:Program error
		}
		while(1){
			if(sg.set_Internet_channel!=sg.Internet_channel){
				application_result=-4;
				printf("Network connecting error\n");
				exit(-4);
				//notice:network connecting error
				//end
			}
			else if(sg.Local_network_respond_signal!="Y"){
				application_result=-5;
				printf("Local network respond error\n");
				exit(-5);
				//notice:Local network respond error
				//end
			}
			else if(URL!=sg.set_URL){
				application_result=-6;
				printf("Wrong URL error\n");
				exit(-6);
				//notice:wrong URL error
				//end
			}
			else{
				break;
			}
		}
		fflush(stdin);
		printf("Program respond fail\n");
		application_result=1;
		return application_result;
	}
}
int AgentOne(int argc,char *argv[]){
	string apply_signal(argv[0]);//get Visitor¡¯s apply signal_Char
	string URL(argv[1]); //get URL/URI from visitor by front-end
	signals sg;
	int application_result=-1;//initialize the result
	application_result=Judge(apply_signal,URL,sg);//judge those conditions
	while(!application_result){
		printf("The apply is error\n");
		exit(-1);
		//notice:apply error
	}
	char *R_general_status=new char('N');//get R general status from DB
	if(application_result==0){
		*R_general_status='Y';
	}
	//change R general status
	//send R_general_status
	int AgentResult=0;
	return AgentResult;
}
int main(){
}



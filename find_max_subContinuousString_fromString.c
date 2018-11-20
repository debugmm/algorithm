int findMaxSubContinousString(char array){
	
	int maxLength=0;
	int position=0;
	int length=1;
	
	int stringLength=strlen(array);
	for(i=1;i<stringLength;i++){
		if(array[i]==array[i-1]+1){
			length++;
		}
		else{
			if(length>maxLength){
				maxLength=length;
				length=1;
				position=i-maxLength;
			}
		}
	}
	
	for(int j=position;j<postion+maxLength;j++){
		
		printf("%s",array[j]);
	}
}

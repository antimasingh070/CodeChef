int n;
    cin >> n;
    bool five = n % 5 == 0, eleven = n % 11 == 0; 
    if(n < 5) cout << "NONE";
    else if(five && eleven)cout << "BOTH";
    else if(five || eleven ) cout << "ONE";
    else cout << "NONE";
    
	return 0;

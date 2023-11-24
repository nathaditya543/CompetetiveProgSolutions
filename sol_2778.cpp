double ctr = 0;

for(char i: s){
    if(i == letter)
        ctr++;
}

return floor((ctr/s.size())*100.0);

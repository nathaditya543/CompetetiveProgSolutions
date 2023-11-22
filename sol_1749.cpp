//using kadanes
int psum = 0, pmax = INT_MIN, nsum = 0, nmax = INT_MAX;

for(int i = 0; i < nums.size(); i++){
    psum = psum + nums[i];
    nsum = nsum + nums[i];

    if(pmax < psum)
	pmax = psum;
    
    if(psum < 0)
	psum = 0;

    if(nmax > nsum)
	nmax = nsum;

    if(nsum > 0)
	nsum = 0;          
}

if(abs(nmax) > pmax)
    return(abs(nmax));
else
    return pmax;


//using prefix sum

int sum = 0, maxPre = 0, minPre = 0;

for(auto i: nums){
    sum += i;
    maxPre = max(maxPre,sum);
    minPre = min(minPre,sum);
}
return(maxPre - minPre);

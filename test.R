sum <- 0
for(i in 5:15) {
    if(i%%2 == 0)
    {
        next;
    }
    if(i%%10 == 0)
    {
        break;
    }
    sum <- sum + i
}
print(sum)
from datetime import datetime, timedelta

n=datetime.now()

m=n-timedelta(days=1)

p=n+timedelta(days=1)

print(n,m,p)
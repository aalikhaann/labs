from datetime import datetime, timedelta

n=datetime.now()
m=n-timedelta(hours=9)
n-=m
print( n.total_seconds())
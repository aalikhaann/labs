from datetime import datetime, timedelta

n = datetime.now()
r = n - timedelta(days=5)

print(r)

#GA 7th Getting time ntoes

import time
import datetime

epoch = time.time()
readable_time =time.ctime(epoch)

print(f"the time in seconds since jan 1st 1970: {epoch}")
print(f"the time is :{readable_time}")

now = datetime.datetime.now()
hour = now.hour

print(f"the time is {now}")
print(f"The time is {hour}")

print(f"The time is: {now}")
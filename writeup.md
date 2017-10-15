---

**PID controller**

[//]: # (Image References)

[video1]: ./output.mov "Video"

---

### Writeup / README


### Discussion

P - the proportinal component coarsly regulates convergence of a trajectory to a target, it also overshoots resulting 
in car driving in oscillating manner. To compensate for oscilating effect a D component is introduced that is responsbile for
counter steering hence compensate the oscillating effect. So the car seems to converge to a target trajectory with some bias.
I component in PID controller is exactly for that - to adjust for a bias and finally make the car drive as close as possible to a 
target trajectory and minimize CTE.  

```
  Trajectory PID P = 0.1, I = 0.0004, D = 3.0
  Throttle PID  P = 0.3, I = 0.00004, D = 1.5

```

I started with trajectory PID leaving throttle constant and very small. First I picked a reasonable P value while keeping D, I variables set to zeros, then I picked D component to compensate for wobblying and finally adjust for bias by picking good I value. All components were picked and adjusted manually. I quickly converged on reasonable values.

---

### (video)

Here's a project video [link to my video result](./output.mov)


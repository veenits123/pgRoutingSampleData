## [**Boost::Edge Coloring**](https://www.boost.org/doc/libs/1_75_0/libs/graph/doc/edge_coloring.html)

### Boost Example: https://www.boost.org/doc/libs/1_75_0/libs/graph/example/edge_coloring.cpp

### pgRouting Sample Data: https://docs.pgrouting.org/latest/en/sampledata.html

## Want to run these codes on your Computer?
Then better make sure you have **GNU g++/gcc compiler** and **Boost Library** installed.

Now we are ready to go just Download the codes and compile it.

### How?
Make sure you are here: `/pgRoutingSampleData/edgeColoring/boostExample $`

I have used **boostExample**, you can do the same with other.

Now run the following command:
```
g++ boostExample.cpp -o boostExample -Wall

```
Then run this:
```
./boostExample

```
And you get output like this:
```
Colored using 5 colors
  1-4: 5
  1-6: 1
  2-3: 3
  2-5: 4
  2-7: 2
  2-10: 1
  3-4: 1
  3-5: 2
  4-6: 3
  4-9: 2
  5-7: 5
  6-7: 4
  6-8: 2
  7-8: 1

```

# Diagram of Boost Example

## Initial State:
![boost_example](https://user-images.githubusercontent.com/39950919/112090326-59fe9800-8bb9-11eb-95b3-39db09dde1ec.jpg)

## Final State:
![14](https://user-images.githubusercontent.com/39950919/112090360-67b41d80-8bb9-11eb-8eee-1221dd365c65.jpeg)

# Animation of Boost Example
![boostExample](https://user-images.githubusercontent.com/39950919/112090502-ad70e600-8bb9-11eb-8fd7-f6c189a7f344.gif)

# Diagram of pgRouting Sample Data

## Initial State:
![sampleData](https://user-images.githubusercontent.com/39950919/112091443-64ba2c80-8bbb-11eb-86b2-5030aac9463f.jpeg)

## Final State:
![sample_data_final](https://user-images.githubusercontent.com/39950919/112328289-354f1100-8cdc-11eb-9448-6500f0c180ef.jpeg)

# Animation of pgRouting Sample Data
![Animated GIF-downsized_large](https://user-images.githubusercontent.com/39950919/112342744-7ea55d80-8ce8-11eb-82f0-172d231571eb.gif)

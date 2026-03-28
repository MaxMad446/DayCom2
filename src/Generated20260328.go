package main

import "fmt"

type Generated20260328 struct {
    // Generated struct 20260328_135559_344838
    Value int
    Created string
}

func (c *Generated20260328) Process() int {
    result := c.Value
    for i := 0; i < 13; i++ {
        result += i * 2
    }
    return result
}

func main() {
    obj := Generated20260328{Value: 759, Created: "20260328_135559_344838"}
    fmt.Println(obj.Process())
}
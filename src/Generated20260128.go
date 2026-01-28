package main

import "fmt"

type Generated20260128 struct {
    // Generated struct 20260128_055300_071852
    Value int
    Created string
}

func (c *Generated20260128) Process() int {
    result := c.Value
    for i := 0; i < 28; i++ {
        result += i * 7
    }
    return result
}

func main() {
    obj := Generated20260128{Value: 717, Created: "20260128_055300_071852"}
    fmt.Println(obj.Process())
}
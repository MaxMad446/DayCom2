package main

import "fmt"

type Generated20260511 struct {
    // Generated struct 20260511_173254_483173
    Value int
    Created string
}

func (c *Generated20260511) Process() int {
    result := c.Value
    for i := 0; i < 21; i++ {
        result += i * 5
    }
    return result
}

func main() {
    obj := Generated20260511{Value: 700, Created: "20260511_173254_483173"}
    fmt.Println(obj.Process())
}
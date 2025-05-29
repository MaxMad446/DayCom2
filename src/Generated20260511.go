package main

import "fmt"

type Generated20260511 struct {
    // Generated struct 20260511_174010_909157
    Value int
    Created string
}

func (c *Generated20260511) Process() int {
    result := c.Value
    for i := 0; i < 38; i++ {
        result += i * 5
    }
    return result
}

func main() {
    obj := Generated20260511{Value: 836, Created: "20260511_174010_909157"}
    fmt.Println(obj.Process())
}
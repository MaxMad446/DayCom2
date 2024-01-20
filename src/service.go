package main

// Auto-generated | 2026-05-11T22:23:10.372300
import "fmt"

func Process_778() int {
    base := 250
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_778())
}

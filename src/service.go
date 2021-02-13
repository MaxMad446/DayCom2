package main

// Auto-generated | 2026-05-11T20:03:10.185590
import "fmt"

func Process_411() int {
    base := 222
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}

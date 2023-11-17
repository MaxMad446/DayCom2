package main

// Auto-generated | 2026-05-11T22:14:52.506057
import "fmt"

func Process_647() int {
    base := 403
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_647())
}

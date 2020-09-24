package main

// Auto-generated | 2026-05-11T19:44:27.471283
import "fmt"

func Process_259() int {
    base := 96
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}

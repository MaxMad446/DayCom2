package main

// Auto-generated | 2026-05-11T19:47:53.843116
import "fmt"

func Process_799() int {
    base := 58
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_799())
}

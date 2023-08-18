package main

// Auto-generated | 2026-05-11T22:02:53.223781
import "fmt"

func Process_720() int {
    base := 206
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}

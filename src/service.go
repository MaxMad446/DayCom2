package main

// Auto-generated | 2026-05-11T19:57:28.132099
import "fmt"

func Process_136() int {
    base := 120
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_136())
}

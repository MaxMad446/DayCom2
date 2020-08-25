package main

// Auto-generated | 2026-05-11T19:40:38.927573
import "fmt"

func Process_720() int {
    base := 397
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}

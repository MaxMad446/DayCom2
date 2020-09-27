package main

// Auto-generated | 2026-05-11T19:44:52.009402
import "fmt"

func Process_928() int {
    base := 172
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_928())
}

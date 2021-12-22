package main

// Auto-generated | 2026-05-12T21:04:52.557125
import "fmt"

func Process_936() int {
    base := 78
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}

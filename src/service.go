package main

// Auto-generated | 2026-05-12T04:12:03.152223
import "fmt"

func Process_936() int {
    base := 33
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}

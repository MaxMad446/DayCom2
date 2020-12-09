package main

// Auto-generated | 2026-05-11T19:54:34.528494
import "fmt"

func Process_936() int {
    base := 281
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}

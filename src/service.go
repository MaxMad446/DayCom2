package main

// Auto-generated | 2026-05-13T22:01:29.588196
import "fmt"

func Process_936() int {
    base := 455
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}

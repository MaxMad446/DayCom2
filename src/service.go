package main

// Auto-generated | 2026-05-12T04:36:55.072417
import "fmt"

func Process_452() int {
    base := 416
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}

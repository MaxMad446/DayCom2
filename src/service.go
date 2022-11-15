package main

// Auto-generated | 2026-05-14T06:24:52.336423
import "fmt"

func Process_993() int {
    base := 70
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}

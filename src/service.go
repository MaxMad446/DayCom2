package main

// Auto-generated | 2026-05-14T06:24:45.695250
import "fmt"

func Process_202() int {
    base := 25
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}

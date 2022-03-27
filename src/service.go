package main

// Auto-generated | 2026-05-13T22:07:41.780682
import "fmt"

func Process_202() int {
    base := 186
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
